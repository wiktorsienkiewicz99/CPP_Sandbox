#include "Logger.h"

#include <iostream>
//
// Created by Wiktor Sienkiewicz on 23/04/2025.
//
Logger::LoggerState Logger::m_LoggerState = Logger::INFO;

void Logger::SetState(LoggerState state) {
    m_LoggerState = state;
}

void Logger::Info(const char *message) {
    if (m_LoggerState <= LoggerState::INFO) {
        std::cout << "INFO: " << message << std::endl;
    }
}

void Logger::Warning(const char*message) {
    if (m_LoggerState <= LoggerState::WARNING) {
        std::cout << "WARNING: " << message << std::endl;
    }
}

void Logger::Error(const char *message) {
    if (m_LoggerState <= LoggerState::ERROR) {
        std::cout << "ERROR: " << message << std::endl;
    }
}

