(
select name,customers_number from lawyers
order by customers_number desc
limit 1
)
union all
(select name,customers_number from lawyers
order by customers_number
limit 1)
union all
(select 'Average'as name,cast(avg(customers_number)as int)as customers_number from lawyers)