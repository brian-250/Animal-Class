class Heart {
 public:
   Heart();
   bool heartBeat() const;
   void setHeartBeat(bool heart_beat);
 private:
    bool heart_beat_;
};