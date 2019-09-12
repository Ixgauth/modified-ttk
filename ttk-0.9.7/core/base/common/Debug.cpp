#include                <Debug.h>

bool ttk::welcomeMsg_ = true;
bool ttk::goodbyeMsg_ = true;
int ttk::globalDebugLevel_ = -INT_MAX;

using namespace std;
using namespace ttk;

Debug::Debug() { 
  debugLevel_ = infoMsg;
  
  // avoid warnings
  if(goodbyeMsg_) goodbyeMsg_ = true; 
  
  if((ttk::welcomeMsg_)&&(debugLevel_)){
    ttk::welcomeMsg_ = false;
    stringstream s;

    s << "[Common] "
" _____ _____ _  __                       __  __    ____   ___  _  ___"
//" _____ _____ _  __                       __  __    ____   ___  _ _____ "
      << endl << "[Common] "
"|_   _|_   _| |/ /                      / /__\\ \\  |___ \\ / _ \\/ |( _ )"
//"|_   _|_   _| |/ /                      / /__\\ \\  |___ \\ / _ \\/ |___  |"
      << endl << "[Common] "
"  | |   | | | ' /                      | |/ __| |   __) | | | | |/ _ \\"
//"  | |   | | | ' /                      | |/ __| |   __) | | | | |  / /"
      << endl << "[Common] "
"  | |   | | | . \\                      | | (__| |  / __/| |_| | | (_) |"
//"  | |   | | | . \\                      | | (__| |  / __/| |_| | | / /"
      << endl << "[Common] "
"  |_|   |_| |_|\\_\\                     | |\\___| | |_____|\\___/|_|\\___/"
//"  |_|   |_| |_|\\_\\                     | |\\___| | |_____|\\___/|_|/_/"
      << endl << "[Common] "
"                                        \\_\\  /_/"
      << endl;
    s << "[Common] Welcome!" << endl;
    dMsg(cout, s.str(), 1);
  }
}

Debug::~Debug(){
  if((lastObject_)&&(ttk::goodbyeMsg_)){
    stringstream msg;
    msg << "[Common] Goodbye :)" << endl;
    dMsg(cout, msg.str(), 1);
    ttk::goodbyeMsg_ = false;
  }
}

int Debug::dMsg(ostream &stream, string msg, 
  const int &debugLevel) const{
 
  if((debugLevel_ >= debugLevel)
    ||(globalDebugLevel_ >= debugLevel))
    stream << msg.data();
  return 0;
}

int Debug::err(const string msg, const int &debugLevel) const{
  return dMsg(cerr, msg, 0);
}

int Debug::msg(const char *msg, const int &debugLevel) const{
  return dMsg(cout, string(msg), debugLevel);
}

int Debug::setDebugLevel(const int &debugLevel){
  debugLevel_ = debugLevel;
  return 0;
}

