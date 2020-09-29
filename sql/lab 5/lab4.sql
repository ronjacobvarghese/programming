create table branch(br_name varchar(20) primary key,br_city varchar(20),assets numeric(8,2));
create table account(accno integer primary key,br_name varchar(20) references branch(br_name),balance numeric(8,2));
create table customer(cus_name varchar(20)primary key,cus_street varchar(25),cus_city varchar(10));
create table loan(loan_no integer primary key,br_name varchar(20) references branch(br_name),amount numeric(8,2));
create table depositor(cus_name varchar(20) references customer(cus_name),accno integer references account(accno),primary key(cus_name,accno));
create table borrower(cus_name varchar(20) references customer(cus_name),loan_no integer references loan(loan_no),primary key(cus_name,loan_no));
insert into branch values
('1000','kerala',180000),
('1001','delhi',270000),
('1002','goa',190000),
('1003','bengaluru',120000);
insert into account values
(100201,'1002',12000),
(100301,'1003',34000),
(100001,'1000',56000),
(100101,'1001',78215);
insert into customer values
('person1','strt1','goa'),
('person2','strt2','kerala'),
('person3','strt3','bengaluru'),
('person4','strt4','delhi');
insert into loan values
(102,'1002',12345),
(100,'1000',67891),
(101,'1001',23456),
(103,'1003',63524);
insert into depositor values
('person1',100201),
('person2',100001),
('person3',100301),
('person4',100101);
insert into borrower values
('person1',102),
('person2',100),
('person3',103),
('person4',101);
select cus_name from branch inner join account on branch.br_name=account.br_name inner join depositor on account.accno=depositor.accno where branch.br_name='1000' group by cus_name having count(branch.br_name)>1;
select avg(assets) from branch where br_name='main';
select count(depositor.cus_name) 
from (depositor natural full outer join account) 
group by depositor.cus_name ;
select br_name from account group by br_name having avg(balance)>1200;
update account set balance=balance*1.06 where balance>10000;
update account set balance=balance*1.05 where balance<=10000;
select cus_name from depositor union select cus_name from borrower;
select cus_name from depositor intersect select cus_name from borrower;
select count(distinct br_name) from loan;
select br_name,avg(amount) from loan group by br_name;
select cus_name from borrower group by cus_name having count(loan_no)>1;
select sum(amount) from loan;
