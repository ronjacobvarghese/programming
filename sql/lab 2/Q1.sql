create table department(
	deptno numeric primary key,
	dname varchar(14) not null,
	loc varchar(20)
);
insert into department values
(10, 'ACCOUNTING','NEW YORK'),
(20,'RESEARCH','DALLAS'),
(30,'SALES','CHICAGO'),
(40,'OPERATIONS','BOSTON');
create table employee(
	empno numeric primary key,
	ename varchar(20) not null,
	job varchar(10),
	mgr_id numeric,
	hired_date date,
	basic_sal numeric(8,2) default 1000,
	incentive numeric(8,2) check(incentive<=basic_sal),
	deptno numeric references department(deptno)
);
insert into employee values
(7369,'SMITH','CLERK',7902,'1980-12-17',6800,NULL,20),
(7499,'ALLEN','SALESMAN',7698,'1981-02-20',11600,300,30),
(7521,'WARD','SALESMAN',7689,'1981-02-22',11250,500,30),
(7566,'JONES','MANAGER',7839,'1981-04-02',22975,NULL,20),
(7654,'MARTIN','SALESMAN',7689,'1981-09-28',11250,1400,30),
(7698,'BLAKE','MANAGER',7839,'1981-05-01',22850,NULL,30),
(7782,'CLARK','MANAGER',7839,'1981-06-09',22450,NULL,10),
(7788,'SCOTT','ANALYST',7566,'1982-12-09',13000,NULL,20);
select * from employee;
drop table employee;
SELECT * FROM department;
select * from employee where ename='BLAKE';
select empno,ename from employee where job='MANAGER';
SELECT DISTINCT job from employee where job like '_A%';
select concat(concat(ename,' '),job) from employee;

select ename,deptno,hired_date from employee;
select * from employee order by ename;

	
