void printTable(int s, int e, int w) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
 for(int i=s;i<=e;i=i+w)
 cout<<i<<"\t"<<(((i-32)*5)/9)<<"\n";
}


