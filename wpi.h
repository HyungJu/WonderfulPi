#include <stdio.h>
double wpi_get(int digits) {
  
  int i,m,s;
  double wpi_data[2]={0};
  for(i=1;i<=digits;i++){
  
    m=i*2-1;
    s=-s;
    wpi_data[0]+=1.0/m*s;
  }
  
  wpi_data[1]=wpi_data[1]*4.0;
  
  return wpi_data[1];
}
