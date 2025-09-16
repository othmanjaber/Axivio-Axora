#include <Pixy2.h>
Pixy2 pixy;
String nextcolor;
int maxindex = 0;
#define green 1
#define red 2

void setup(){
  Serial.begin(9600);
  pixy.init();
}

String get_largest_object(){
  maxindex = 0;
  int colors_area[20];  
  for(int i = 0; i < pixy.ccc.numBlocks; i++){
    colors_area[i] = pixy.ccc.blocks[i].m_width * pixy.ccc.blocks[i].m_height;
  }
  for(int i = 1; i < pixy.ccc.numBlocks; i++){
    if(colors_area[i] > colors_area[maxindex]){
      maxindex = i;
    }
  }
  int block = pixy.ccc.blocks[maxindex].m_signature;
  if(block == 1) return "green";
  else if(block == 2) return "red";
  else return "unknown";
}

float detect(){
  pixy.ccc.getBlocks();
  if(pixy.ccc.numBlocks){
    int center = pixy.frameWidth / 2;
    if(pixy.ccc.numBlocks > 1){
      String color = get_largest_object();
      nextcolor = color;
      return center - pixy.ccc.blocks[maxindex].m_x;
    }
    else{
      if(pixy.ccc.blocks[0].m_signature == 1){
        nextcolor = "green";
      }
      else if(pixy.ccc.blocks[0].m_signature == 2){
        nextcolor = "red";
      }
      return center - pixy.ccc.blocks[0].m_x;
    }
  }
  return 0;
}

void loop(){
}
