- ## PREREQUISITE : IDEA ABOUT PRIME NUMBERS .
 [Brief Introduction to Sieve](http://www.progkriya.org/gyan/basic-number-theory.html)
 
- ### CODE EXPLANATION :
   The numbers which are not prime are marked by 1 . That's Why Primarily We will mark every Even Numbers by **1** Because Even Numbers are divisble by 2 . 2 is the Only 
   even Number which is a Prime . it will take O(N) time .
   
   Even numbers are not prime (Except 2 ) so we will check only odd numbers whose **check[i]** value is **0** and increment the value of **i** by 2 in our outer loop to avoid
   even number. We will check odd Numbers up to sqrt(N) . Because if a Number is divisble then it will have atleast one divisor less than it's square root value . if **check[i] =    0** then we will procced to the inner loop .  
   
   **Here we are not starting by j = i+i ,But we are starting by j = i^2 because the numbers  less than i^2 are already checked by the numbers < i and i+i is less than i^2** . So     we Don't need to calculate  them further . Each time we will increment the numbers by 2i  because if this is a odd number then just incrementing **i** will give us even           Numbers and even numbers are not prime so don't need to check this . The inner loop and outer loop combined  will take O(Nxln(N)) time .
   
   Overall Time Complexity will be O(Nxln(N)) + O(N) which is actually O(Nxln(N))
