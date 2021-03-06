ll leastprime[10005];

void findingleastprime(ll n) {
    leastprime[1] = 1 ; // 1 is the least prime factor of itself ;

    for ( ll i = 2 ; i <= n ; i = i+2 ) leastprime[i] = 2 ; //evey even number's least prime factors is 2

    for ( ll i = 3 ; i <= n ; i = i+2) {
         /* we are checking whether number i has a least prime factor ?
            it it has a least prime factor then all of the multiples of i will
            have the same least prime factor of i . So we don't need to go further .if
            it doesn't have a least prime factor then we will go forward and mark all of it's multiples
            which are not marked earlier will mark them by i  .
         */
        if ( leastprime[i] == 0) {
            leastprime[i] = i ; // the number is a prime that's why it's least prime factor will be the numbers itself
            for ( ll j = i*i ; j <= n ; j = j+i ) {
                if ( leastprime[j] == 0) leastprime[j] = i ; // the number which are not marked earlier by any other small prime number will be marked now .
            }
        }
    }

}

MLL primefactoraization(ll n) {
    MLL primefactors ;
    while( n!=1) {
        primefactors[leastprime[n]]++;
        n = n/leastprime[n];
    }
    return primefactors ;
}

ll factorialpower(ll n,ll p) {
    ll freq = 0 ;
    while(n) {
        freq += n/p;
        n = n/p;
    } 
    return freq ;
}
ll No_of_trailing_zero(ll number , ll base) {
    findingleastprime(10000);
    MLL factors = primefactoraization(base);
    ll trailingzero = inf ;
    for ( auto it = factors.begin() ; it != factors.end() ; it++ ) {
        ll val = factorialpower(number,it->first);
        trailingzero = min(trailingzero,val/it->second);
    }
    return trailingzero ;
}
