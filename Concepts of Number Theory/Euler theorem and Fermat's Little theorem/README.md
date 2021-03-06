- ### EXPLANATION LINK : 
<br><br> [Euler theorem and Fermat's Little theorem](https://forthright48.com/eulers-theorem-and-fermats-little-theorem/)
- ### EXPLANATION :
<br><br>
 **Euler Theoram :** <br><br>
 
 If a and n are co-prime to each other then a^phi(n) ≡  1 (mod n) <br><br>
 
 **Proof :**<br><br>
 
 Let us take a set , A = b<sub>1</sub>,b<sub>2</sub>,...,b<sub>phi(n)</sub>(mod n) .... eq(1) <br><br>
 
 here all the intergers in the set A are coprime to n ,they are less than n,they are distinct and there are total phi(n) elements .<br><br><br><br>
 
 now let us multiply the eq(1) by a number 'a' to both sides which itself is co-prime to n and name the new set B <br><br>
 
 B = ab<sub>1</sub>,ab<sub>2</sub>,...,ab<sub>phi(n)</sub> (mod n) ... eq(2) .<br><br>
 
 Now we need to proof that A and B are same Set .<br><br>
 
 so for this we need to take 3 steps .<br><br>
 
 1st step :<br><br>
 
 We are just multiplying the elements of set A by 'a' so the number of elements in A and B are same . there are phi(n) number of elements .<br><br>
 
 2nd step :<br><br>
 
 every element in A that means b<sub>i</sub> ( 1 <= i <= phi(n) ) is multiplied with 'a' and both the numbers are co-prime with n so their product will be also co-prime ,<br><br>
 here 1 <= i <= phi(n) <br><br>
 
 3rd Step :<br><br>
 
 Every elements of set B is distinct . because if it is not then for any i ,j <br><br>
    ab<sub>i</sub> ≡ ab<sub>j</sub> (mod n)  here 1 <= i,j <= phi(n)<br><br>
  => b<sub>i</sub> ≡ b<sub>j</sub> (mod n) but that is not possible because all the elements in A are distinct so all the elements in B are distinct also .<br><br>
  
  Now both A and B set have equal number of elements , all the elements of both the sets are co-prime to n , they are disticnt and less than n so both the sets are 
  actually same<br><br>
  
  so now ,<br><br>
      ab<sub>1</sub> x ab<sub>2</sub> x ab<sub>3</sub> x ... x ab<sub>phi(n)</sub>  ≡ b<sub>1</sub> x b<sub>2</sub> x b<sub>3</sub> x ... x b<sub>phi(n)</sub> (mod n)<br><br>
    => a^phi(n) x b<sub>1</sub> x b<sub>2</sub> x b<sub>3</sub> x ...x b<sub>phi(n)</sub>  ≡  b<sub>1</sub> x b<sub>2</sub> x b<sub>3</sub> x...x b<sub>phi(n)</sub>  (mod n)<br><br>
    => a^phi(n) ≡ 1 ( mod n)<br><br>
  
  so euler Theoram is proved .<br><br><br><br>
  
 
 **Fermat's little theoram :** <br><br>
 
 if a and p are coprime and p is a prime, then a^(p−1) ≡ 1 (mod p)<br><br><br><br>
 
 it is nothing but a simple application of euler theoram ,<br><br>
 from Euler theoram we know already a^phi(n) ≡  1 ( mod n ) <br><br>
 now , if n is a prime then the value phi(p) will be p-1 ,<br><br>
 so , euler theoram for any prime number p that is co-prime to a will be a^p-1 ≡ 1 ( mod p )<br><br>
