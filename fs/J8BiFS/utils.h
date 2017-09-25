#IFNDEF __JOS
#DEF __JOS;

typedef unsigned char * byte;
typedef unsigned long long address;
// typedef unsigned long long * addressp;

void eraseByte(long address) {
  byte b0fill = 0x00;
  writeByte(address,b0fill,true);
}
bool isByteOccupied(long address) {
  
}
bool writeByte(long address,byte value,bool overwrite) {
  if (isByteOccupied(address) && !overwrite) {return false;}
  
  return true;
}
