//
// Created by Menium on 5/11/2024.
//

#include "MessageBus.h"

void MessageBus::addReceiver(std::function<void(Message)> messageReceiver) {
        receivers.push_back(messageReceiver);
}
void MessageBus::sendMessage(Message message)
{
    messages.push(message);
}

