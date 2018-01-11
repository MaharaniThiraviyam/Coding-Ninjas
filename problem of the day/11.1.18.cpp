int countIntegers(string s){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  int count=0,i;
   for(i=0;s[i]!='\0';i++){
  if(((s[i]>47)&&(s[i]<58))&&(((s[i-1]>96)&&(s[i-1]<123))||((s[i-1]>64)&&(s[i-1]<91))))

     count++;
  else if((s[i]>47)&&(s[i]<58)&&(i==0))
    count++;
  }
 return count;
    
}

