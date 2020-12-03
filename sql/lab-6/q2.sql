create table employee (
ssn integer primary key,
fname varchar(20),
lname varchar(20),
address varchar(20),
sex char,
salary numeric(8,2),
superssn integer references employee(ssn),
dno integer);
create table department(
dno integer primary key,
dname varchar(20),
mgrssn integer references employee(ssn),
mgrstartdate date);
create table dlocation (
dno integer references department(dno),
dloc varchar(20),
primary key(dno,dloc));
create table project(
pno integer primary key,
pname varchar(20),
plocation varchar(20),
dno integer references department(dno));
create table works_on(
ssn integer references employee(ssn),
pno integer references project(pno),
hours integer,
primary key(ssn,pno));
alter table employee add constraint fk foreign key(dno) references department(dno);
a.
select e.fname,e.lname,s.fname as supervisor_fname,s.lname as supervisor_lname
from employee as e,employee as s
where e.superssn=s.ssn;
b.
select w.pno
from works_on as w,employee as e
where w.ssn=e.ssn and e.lname='Kiran';
c.
select pr.dno,fname,lname,pname
from employee as e,works_on as w,project as pr
where e.ssn=w.ssn and pr.dno=e.dno
order by pr.dno,lname,fname;
d.
select (count(sex))
from employee
group by dno;