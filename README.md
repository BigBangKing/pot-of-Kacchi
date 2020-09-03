# pot-of-Kacchi

For a pot of Kacchi you need
1. 5kg of basmati rice (pB tk/kg)
2. 10kg of mutton (pM tk/kg)
3. 1kg of onion (pO tk/kg)
4. 1kg of ginger (pG tk/kg)
5. 3kg of potato (pP tk/kg) 

you have 
nB kg of rice
nM kg of mutton
nO kg of onion
nG kg of ginger
nP kg of potato
P taka cash. You can buy items from the market to make more pots of kacchi.If you can sell each pot at the price of S taka then what is the maximum amount of taka you can earn?

input format:
-------------
t-tests. For each of the tests in the first line, there will be 5 integers - the prices of the items. In the second line, there will be 5 integers - the quantity of the items you already have. The third line contains 2 integers, the total money you have and the price at which you can sell each pot of Kacchi.

output:
-------------
For each test output a single integer in each line - the maximum amount of money you can earn.

Constraints:
-------------
t <= 5
pB, pM, pO, pG, pP <= 1000
nB, nM, nO, nG, nP <= 100
P <= 10 ^ 12
S <= 5000

sample input:
-------------
2
150 900 100 80 40
20 7 2 1 5
500000000 3000
200 500 70 30 10
5 10 4 2 10
7000 1000

sample output:
--------------
149256000
2000
