create table department(
deptno integer primary key,
dname varchar(14) not null,
loc varchar(20) );

create table employee(
empno integer primary key,
ename varchar(20) not null,
job varchar(10),
mgr_id integer,
hired_date date,
basic_sal numeric(8,2) default 1000.00,
incentive numeric(8,2) check(incentive<basic_sal),
deptno integer,
foreign key(deptno) references department(deptno)    
);

insert into department values
(10,'ACCOUNTING','NEW YORK'),
(20,'RESEARCH','DALLAS'),
(30,'SALES','CHICAGO'),
(40,'OPERATIONS','BOSTON');

insert into employee values
(7369,'SMITH','CLERK',7902,'1980-12-17',6800,NULL,20),
(7499,'ALLEN','SALESMAN',7698,'1981-02-20',11600,300,30),
(7521,'WARD','SALESMAN',7698,'1981-02-22',11250,500,30),
(7566,'JONES','MANAGER',7839,'1981-04-02',22975,NULL,20),
(7654,'MARTIN','SALESMAN',7698,'1981-09-28',11250,1400,30),
(7698,'BLAKE','MANAGER',7839,'1981-05-01',22850,NULL,30),
(7782,'CLARK','MANAGER',7839,'1981-06-09',22450,NULL,10),
(7788,'SCOTT','ANALYST',7566,'1982-12-09',13000,NULL,20);
select ename from employee where basic_sal=(select max(basic_sal) from employee)

select  ename,empno from employee where job='CLERK' and 
basic_sal=(select max(basic_sal) from employee where job='CLERK')

select ename from employee where job='SALESMAN' and 
basic_sal>all(
	select basic_sal from employee where job='CLERK'
)
select ename from employee where job='CLERK' and basic_sal>some(
	select basic_sal from employee where job='SALESMAN'
)

select ename from employee 
where basic_sal>some(select basic_sal from employee where ename='JONES' or ename='SCOTT')

select deptno ,ename from 
(select deptno as dno,max(basic_sal) as max_sal from employee group by deptno)
as employ inner join employee on employ.max_sal=employee.basic_sal


select job,ename from 
(select job as j,max(basic_sal) as max_sal from employee group by job)
as employ left outer join employee on employ.max_sal=employee.basic_sal 

select ename from employee where deptno=(select deptno from department where dname='ACCOUNTING')

select ename from employee where deptno=(select deptno from department where loc='CHICAGO');

select job from (select job,sum(basic_sal) as total_sal from employee group by(job)) 
as employ where total_sal>(select max(basic_sal) from employee where job='MANAGER') 

select ename from employee where deptno=10 and basic_sal>some (select basic_sal from employee where deptno!=10);

select ename from employee where deptno=10 and basic_sal>all (select basic_sal from employee where deptno!=10);
