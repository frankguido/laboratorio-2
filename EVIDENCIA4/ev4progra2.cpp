char *find(const char*x,const char*y){
  int i=0;
  int c=0;
  char*temp=0;
  while(x[i]){
    if(x[i]==y[c]){
      c++;
      temp[c]=y[c];
      if(!y[c+1]){
        return temp;
      }
      if(x[i+1]){
        if(x[i+1]!=y[c+1])
          return null;
      }
    }
    i++;
  }
  return null;

