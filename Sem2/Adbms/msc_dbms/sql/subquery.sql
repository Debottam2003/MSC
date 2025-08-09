select pname 
from products 
where id in 
(select pid 
from order 
where quantity > 50
);

select pname 
from products 
where id < any
(select pid 
from order 
where quantity = 1
);

select pname 
from products 
where id < all
(select pid 
from order 
where quantity = 1
);

select * 
from employee 
where salary > all
(select salary 
from employee 
where department = 'sales' 
and 
dptid = 2
);