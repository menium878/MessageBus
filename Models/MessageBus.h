//
// Created by Menium on 5/11/2024.
//

#ifndef MESSAGEBUS_MESSAGEBUS_H
#define MESSAGEBUS_MESSAGEBUS_H

#include <functional>
#include <queue>
#include "Message.h"
class MessageBus {
public:
    MessageBus() = default;
    ~MessageBus() = default;

    void addReceiver(std::function<void (Message)>messageReceiver);
    void sendMessage(Message message);
private:
    std::vector<std::function<void (Message)>> receivers;
    std::queue<Message> messages;

};


#endif //MESSAGEBUS_MESSAGEBUS_H
