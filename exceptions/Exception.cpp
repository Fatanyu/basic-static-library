//
// Created by kaktus on 7/6/19.
//

#include "Exception.hpp"

const char *kaktus::Exception::what() const noexcept
{
    return exception::what();
}
