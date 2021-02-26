select c.name from customers as c
inner join legal_person as l on c.id=l.id_customers;