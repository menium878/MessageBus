//
// Created by Menium on 5/11/2024.
//

#include "Message.h"

Message::Message(const std::string event) {
    messageEvent = event;
}

std::string Message::getEvent() {
    return messageEvent;
}
