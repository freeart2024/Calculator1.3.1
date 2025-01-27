//
// Created by zhang on 2025/1/19.
//

#pragma once
#include<iostream>
#include<string>
namespace debug{
    enum logl {
        message = 0, warning = 1, error = 2
    };
    inline int log(const std::string& message, const int level) {
        switch (level) {
            case logl::message:
                std::clog << "\033[32m" << message << "\033[0m" << std::endl;
            return 0;
            case logl::warning:
                std::cerr << "\033[33m" << message << "请重新输入。" << "\033[0m" << std::endl;
            return 0;
            case logl::error:
                std::cerr << "\033[31m" << message << "请重新输入。" << "\033[0m" << std::endl;
            return 0;
            default: ;
        }return 1;
    }
}
