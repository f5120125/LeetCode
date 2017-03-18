int myAtoi(char* str) {
    long ans=0;
    int len=0;
    int i=0;
    long mul=1;
    int isPositive=0;
    int hasSign=0;
    int sign=1;
    int start;
    int end;
    while( str[i]==' '){
        i++;
    }
    start=i;
    if(str[i]=='+' || str[i]=='-' || str[i]>=48 || str[i]<=57){
        if(str[i]=='+' || str[i]=='-'){
            hasSign=1;
            if(str[i]=='-')
                sign=-1;
        }
        i++;
        if(hasSign && (str[i]<48 || str[i]>57) )
            return 0;
        else{
            if(!hasSign)
                i=start;
            while(str[i]>=48 && str[i]<=57){
                len++;
                i++;
            }
            if(hasSign==1)
                len+=1;
                
            
            for(i=start+len-1; i>=start+hasSign; i--){
                ans += (str[i]-48)*mul;
                mul*=10;
            }
            
        }
    }
    else
        return 0;
        
    if( ans>2147483647 && sign==1){
        ans=2147483647;
    }
    else if(ans>2147483648 && sign==-1) {
        ans = 2147483648;
    }
    else if((len-1-hasSign)>10 && sign==1)
        ans=2147483647;
    else if((len-1-hasSign)>10 && sign==-1)
        ans=2147483648;
        
    return ans*sign;
}

