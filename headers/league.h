#include <vector>
#include <string>

class League
{
   private:
      std::vector<std::string> _league;
      std::vector<std::string> _division1;
      std::vector<std::string> _division2;
      std::string _leagueName;
      std::string _division1Name;
      std::string _division2Name;
      bool power5;
   protected:
      
   public:
      League();
      League(std::string ln, std::vector <std::string> teams, bool p5);
      League(std::string ln, std::vector <std::string> teams, std::string d1, std::vector <std::string> d1teams, std::string d2, std::vector <std::string> d2teams, bool p5);
      ~League();
      void setDivisionName(int i, std::string dName);
      void setLeagueName(std::string lName);
      void setDivisionTeams(int i, std::vector <std::string> d);
      void setP5(bool i);
      void setLeagueTeams(std::vector <std::string> l); 
      void getDivisionName(int i, std::string dName);
      void getLeagueName(std::string lName);
      void getDivisionTeams(int i, std::vector <std::string> d);
      void getP5(bool i);
      void getLeagueTeams(std::vector <std::string> l); 
};
