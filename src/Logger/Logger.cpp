#include "Logger.h"
#include <iostream>

Logger::LoggerState Logger::m_LoggerState = Logger::INFO;

// ANSI color codes
#define RESET_COLOR   "\033[0m"
#define INFO_COLOR    "\033[37m" // White
#define WARNING_COLOR "\033[33m" // Yellow
#define ERROR_COLOR   "\033[31m" // Red

void Logger::SetState(LoggerState state) {
    m_LoggerState = state;
}

void Logger::Info(const char* message) {
    if (m_LoggerState <= LoggerState::INFO) {
        std::cout << INFO_COLOR << "[INFO]    : " << message << RESET_COLOR << std::endl;
    }
}

void Logger::Warning(const char* message) {
    if (m_LoggerState <= LoggerState::WARNING) {
        std::cout << WARNING_COLOR << "[WARNING] : " << message << RESET_COLOR << std::endl;
    }
}

void Logger::Error(const char* message) {
    if (m_LoggerState <= LoggerState::ERROR) {
        std::cout << ERROR_COLOR << "[ERROR]   : " << message << RESET_COLOR << std::endl;
    }
}