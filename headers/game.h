#include <string>

class Game
{
   private:
      std::string team1;
      std::string team2;
      std::string month;
      std::string day; 
      int winning_team;
      int team1Score;
      int team2Score;
   protected:
      
   public:
      Game();
      Game(std::string t1, std::string t2, std::string date);
      Game(std::string t1, std::string t2, std::string date, int s1, int s2);
      ~Game();
      void setTeam1(std::string t);
      void setTeam2(std::string t);
      void setDate(std::string d);
      void setScore1(int s);
      void setScore2(int s);
      void getTeam1(std::string t);
      void getTeam2(std::string t);
      void getDate(std::string d);
      void getScore1(int s);
      void getScore2(int s);
      int gameResult();
};
