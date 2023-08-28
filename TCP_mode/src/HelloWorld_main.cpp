// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file HelloWorld_main.cpp
 *
 */

#include <pthread.h>

#include "HelloWorldPublisher.h"
#include "HelloWorldSubscriber.h"

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>


int main(
        int argc,
        char** argv)
{
    int samples = 100000;

    auto pub_thread = std::thread([&]() {
        HelloWorldPublisher* mypub = new HelloWorldPublisher();
        if(mypub->init("HelloWorldTopic", "HelloWorld"))
        {
            std::cout << "Starting publisher." << std::endl;
            mypub->run(static_cast<uint32_t>(samples));
        }
        delete mypub;
    });

    auto sub_thread = std::thread([&]() {
        HelloWorldSubscriber* mysub = new HelloWorldSubscriber();
        if(mysub->init("HelloWorldTopic", "HelloWorld"))
        {
            std::cout << "Starting Subscriber." << std::endl;
            mysub->run();
        }

        delete mysub;
    });


    pub_thread.join();
    sub_thread.join();


    return 0;
}
