create table category_details (category_id integer,category_name varchar(10));
create table sub_category_details(sub_category_id integer, category_id integer,sub_category_name varchar(10));
create table product_details(Product_id integer, category_id integer,sub_category_id integer, product_name varchar(10));
alter table category_details add primary key(category_id);
alter table sub_category_details add constraint pk_sub_category_id primary key(sub_category_id);
alter table sub_category_details add constraint fk_category_id foreign key(category_id) references category_details(category_id);
alter table product_details add constraint pk_product_id primary key(product_id),add constraint fk_category_id foreign key(category_id) references category_details(category_id),add constraint fk_sub_category_id foreign key(sub_category_id) references sub_category_details(sub_category_id);
alter table product_details add column price numeric(6,2);
insert into category_details values
(11,'beef'),
(22,'eggs'),
(33,'fruits'),
(44,'snacks');
insert into sub_category_details values
(10,11,'pkg'),
(20,22,'imp'),
(30,33,'exp'),
(40,44,'local');
insert into product_details values
(101101,11,10,'beef',5000),
(303301,33,30,'apple',2500),
(202201,22,20,'egg',1000),
(404401,44,40,'chips',500);
alter table product_details add column BRANDNAME varchar(20) default 'empty';
alter table category_details rename to cat_dt;
