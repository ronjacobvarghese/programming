create table employee(
	empno varchar,
	deptno varchar,
	ename varchar,
	desig varchar,
	basic numeric,
	join_date date,
	gender character
)
alter table employee
add primary key(empno,deptno);

insert into employee values
('E1', '1','U' ,'CREWMATE',9001, '2015-04-09','M'),
('E2', '2','CANT' ,'CREWMATE', 6001, '2013-06-12','M'),
('E3', '3','FINDME' ,'IMPOSTER',5000, '2011-02-05','F');

select * from employee;

select empno,ename,desig,basic from employee;

select empno,deptno,gender,basic from employee order by empno

select empno,ename from employee where deptno='2'

select empno,ename,desig,deptno,basic from employee order by basic

select distinct desig from employee

select empno,ename,desig,basic from employee order by basic desc,ename

select * from employee order by basic

delete from employee where basic=5000

drop table employee