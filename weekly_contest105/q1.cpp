int friendGroup(int n, vector <int> &a) {
int o=0,e=0; 
int i=0; 
while(i<n){ 
if(a[i]%2==0){ 
e++; 
} 
else{ 
o++; 
}
i++;
} 
return max(e,o); 
}
