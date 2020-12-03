create table branch(
branch_name varchar(20) primary key,
branch_city varchar(20),
assets numeric(8,2)
);

create table account(
accno int primary key,
branch_name varchar(20) references branch(branch_name),
balance numeric(8,2)
);


create table customer(
customer_name varchar(20) primary key,
customer_street varchar(25),
customer_city varchar(10)
);

create table loan(
loan_number int primary key,
branch_name varchar(20) references branch(branch_name),
amount numeric(8,2)
);

create table depositor(
customer_name varchar(20) references customer(customer_name),
accno int references account(accno),
primary key(customer_name,accno)
);

create table borrower(
customer_name varchar(20) references customer(customer_name),
loan_number int references loan(loan_number),
primary key(customer_name,loan_number)
);

insert into branch values
('district2-SBI','district2',63241.00),
('district1-Main','district1',75433.00),
('kollam-SBI','kollam',36433.00);

insert into account values
(10001,'district1-Main',15243),
(10101,'district2-SBI',12344),
(10201,'kollam-SBI',14667),
(10301,'district1-Main',27676),
(10401,'kollam-SBI',23232);

insert into customer values
('person1','strt1','kollam'),
('person2','strt2','district2'),
('person3','strt3','district1'),
('person4','strt4','district1'),
('person5','strt5','kollam');

insert into loan values
(1111,'district1-Main',36844.00),
(2222,'district2-SBI',87658.00),
(3333,'kollam-SBI',17654.00),
(4444,'kollam-SBI',23564.00);

insert into depositor values
('person3',10001),
('person1',10201),
('person2',10101),
('person4',10301),
('person5',10401);

insert into borrower values
('person3',1111),
('person1',3333),
('person2',2222),
('person5',4444);

--a. 
select customer_name 
from depositor 
where customer_name=some(select customer_name 
  from borrower);
						 
--b. 
select * 
from loan as r
where amount=(select max(amount)
   from loan as s
   where r.branch_name=s.branch_name);
			  
--c. 
select customer_name 
from depositor 
where customer_name!=all(select customer_name 
          from borrower);
						 
--d. 
select branch_name 
from branch 
where assets>all(select assets 
     from branch 
     where branch_name='kollam-SBI');
				 
e. 
delete from depositor 
where accno in (select accno 
from account where branch_name in (select branch_name from branch 
where branch_city='kollam'));
									  
delete from account 
where branch_name in (select branch_name from branch 
where branch_city='kollam');

drop table borrower;
drop table depositor;
drop table loan;
drop table customer;
drop table account;
drop table branch;
