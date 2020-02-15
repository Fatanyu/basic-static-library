//
// Created by kaktus on 7/6/19.
//

#pragma once

#include <string>

namespace kaktus
{
    class Exception : public std::exception
    {
    public:
        const char* what() const noexcept override;

    protected:
        int m_line;
        std::string m_file;
    };
}