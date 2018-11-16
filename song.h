#ifndef SONG_H
#define SONG_H

class SongList {
   public:
      void SetWeightOunces(int ounces);
      void Print() const;
   private:
      int weightOunces;
};

#endif
