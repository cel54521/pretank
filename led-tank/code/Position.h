#ifndef __POSITION_H__
#define __POSITION_H__

#define DIR_CW (1)
#define DIR_CCW (-1)

class Position{
 private:
  const float COUNT_TO_M = 3.73F * 3.1415926535897932384626433F / 58.0F / 8.0F;
  const float L = 9.0F;  //9cm
  float angle;
  float distance;

 protected:
  Position(int pinA, int pinB);

 public:
  static Position* _instance;

  static Position* getInstance(int pinA, int pinB);
  void reset(void);
  void getPosition(float* distance, float* angle);
  void setDir(int indirA, int indirB);
};


#endif
