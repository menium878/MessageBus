//
// Created by Menium on 5/11/2024.
//

#ifndef MESSAGEBUS_MESSAGE_H
#define MESSAGEBUS_MESSAGE_H


#include <string>

class Message {
public:
    Message(std::string event);
    std::string getEvent();
private:
    std::string messageEvent;
};


#endif //MESSAGEBUS_MESSAGE_H
