#ifndef HEART_H
#define HEART_H

class Heart {
 public:
   Heart();
   Heart(bool heart_beat);
   bool heartBeat() const;
   void setHeartBeat(bool heart_beat);
 private:
    bool heart_beat_;
};

#endif