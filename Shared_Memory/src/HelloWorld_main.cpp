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
    std::cout << "Starting publisher." << std::endl;
    int samples = 100000;

    auto pub_thread = std::thread([&]() {
        HelloWorldPublisher* mypub = new HelloWorldPublisher();
        if(mypub->init("HelloWorldTopic", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub->run(static_cast<uint32_t>(samples));
        }
        delete mypub;
    });

    auto sub_thread = std::thread([&]() {
        HelloWorldSubscriber* mysub = new HelloWorldSubscriber();
        if(mysub->init("HelloWorldTopic", "HelloWorld"))
        {
            mysub->run();
        }

        delete mysub;
    });    



    auto pub_thread1 = std::thread([&]() {
        HelloWorldPublisher* mypub1 = new HelloWorldPublisher();
        if(mypub1->init("HelloWorldTopic1", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub1->run(static_cast<uint32_t>(samples));
        }
        delete mypub1;
    });

    auto sub_thread1 = std::thread([&]() {
        HelloWorldSubscriber* mysub1 = new HelloWorldSubscriber();
        if(mysub1->init("HelloWorldTopic1", "HelloWorld"))
        {
            mysub1->run();
        }

        delete mysub1;
    });   


    auto pub_thread2 = std::thread([&]() {
        HelloWorldPublisher* mypub2 = new HelloWorldPublisher();
        if(mypub2->init("HelloWorldTopic2", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub2->run(static_cast<uint32_t>(samples));
        }
        delete mypub2;
    });

    auto sub_thread2 = std::thread([&]() {
        HelloWorldSubscriber* mysub2 = new HelloWorldSubscriber();
        if(mysub2->init("HelloWorldTopic2", "HelloWorld"))
        {
            mysub2->run();
        }

        delete mysub2;
    });   


    auto pub_thread3 = std::thread([&]() {
        HelloWorldPublisher* mypub3 = new HelloWorldPublisher();
        if(mypub3->init("HelloWorldTopic3", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub3->run(static_cast<uint32_t>(samples));
        }
        delete mypub3;
    });

    auto sub_thread3 = std::thread([&]() {
        HelloWorldSubscriber* mysub3 = new HelloWorldSubscriber();
        if(mysub3->init("HelloWorldTopic3", "HelloWorld"))
        {
            mysub3->run();
        }

        delete mysub3;
    });   


    auto pub_thread4 = std::thread([&]() {
        HelloWorldPublisher* mypub4 = new HelloWorldPublisher();
        if(mypub4->init("HelloWorldTopic4", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub4->run(static_cast<uint32_t>(samples));
        }
        delete mypub4;
    });

    auto sub_thread4 = std::thread([&]() {
        HelloWorldSubscriber* mysub4 = new HelloWorldSubscriber();
        if(mysub4->init("HelloWorldTopic4", "HelloWorld"))
        {
            mysub4->run();
        }

        delete mysub4;
    });   


    auto pub_thread5 = std::thread([&]() {
        HelloWorldPublisher* mypub5 = new HelloWorldPublisher();
        if(mypub5->init("HelloWorldTopic5", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub5->run(static_cast<uint32_t>(samples));
        }
        delete mypub5;
    });

    auto sub_thread5 = std::thread([&]() {
        HelloWorldSubscriber* mysub5 = new HelloWorldSubscriber();
        if(mysub5->init("HelloWorldTopic5", "HelloWorld"))
        {
            mysub5->run();
        }

        delete mysub5;
    });   



    auto pub_thread6 = std::thread([&]() {
        HelloWorldPublisher* mypub6 = new HelloWorldPublisher();
        if(mypub6->init("HelloWorldTopic6", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub6->run(static_cast<uint32_t>(samples));
        }
        delete mypub6;
    });

    auto sub_thread6 = std::thread([&]() {
        HelloWorldSubscriber* mysub6 = new HelloWorldSubscriber();
        if(mysub6->init("HelloWorldTopic6", "HelloWorld"))
        {
            mysub6->run();
        }

        delete mysub6;
    });   



    auto pub_thread7 = std::thread([&]() {
        HelloWorldPublisher* mypub7 = new HelloWorldPublisher();
        if(mypub7->init("HelloWorldTopic7", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub7->run(static_cast<uint32_t>(samples));
        }
        delete mypub7;
    });

    auto sub_thread7 = std::thread([&]() {
        HelloWorldSubscriber* mysub7 = new HelloWorldSubscriber();
        if(mysub7->init("HelloWorldTopic7", "HelloWorld"))
        {
            mysub7->run();
        }

        delete mysub7;
    });   




    auto pub_thread8 = std::thread([&]() {
        HelloWorldPublisher* mypub8 = new HelloWorldPublisher();
        if(mypub8->init("HelloWorldTopic8", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub8->run(static_cast<uint32_t>(samples));
        }
        delete mypub8;
    });

    auto sub_thread8 = std::thread([&]() {
        HelloWorldSubscriber* mysub8 = new HelloWorldSubscriber();
        if(mysub8->init("HelloWorldTopic8", "HelloWorld"))
        {
            mysub8->run();
        }

        delete mysub8;
    });   



    auto pub_thread9 = std::thread([&]() {
        HelloWorldPublisher* mypub9 = new HelloWorldPublisher();
        if(mypub9->init("HelloWorldTopic9", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub9->run(static_cast<uint32_t>(samples));
        }
        delete mypub9;
    });

    auto sub_thread9 = std::thread([&]() {
        HelloWorldSubscriber* mysub9 = new HelloWorldSubscriber();
        if(mysub9->init("HelloWorldTopic9", "HelloWorld"))
        {
            mysub9->run();
        }

        delete mysub9;
    });   



    auto pub_thread10 = std::thread([&]() {
        HelloWorldPublisher* mypub10 = new HelloWorldPublisher();
        if(mypub10->init("HelloWorldTopic10", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub10->run(static_cast<uint32_t>(samples));
        }
        delete mypub10;
    });

    auto sub_thread10 = std::thread([&]() {
        HelloWorldSubscriber* mysub10 = new HelloWorldSubscriber();
        if(mysub10->init("HelloWorldTopic10", "HelloWorld"))
        {
            mysub10->run();
        }

        delete mysub10;
    });   


    auto pub_thread11 = std::thread([&]() {
        HelloWorldPublisher* mypub11 = new HelloWorldPublisher();
        if(mypub11->init("HelloWorldTopic11", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub11->run(static_cast<uint32_t>(samples));
        }
        delete mypub11;
    });

    auto sub_thread11 = std::thread([&]() {
        HelloWorldSubscriber* mysub11 = new HelloWorldSubscriber();
        if(mysub11->init("HelloWorldTopic11", "HelloWorld"))
        {
            mysub11->run();
        }

        delete mysub11;
    });   



    auto pub_thread12 = std::thread([&]() {
        HelloWorldPublisher* mypub12 = new HelloWorldPublisher();
        if(mypub12->init("HelloWorldTopic12", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub12->run(static_cast<uint32_t>(samples));
        }
        delete mypub12;
    });

    auto sub_thread12 = std::thread([&]() {
        HelloWorldSubscriber* mysub12 = new HelloWorldSubscriber();
        if(mysub12->init("HelloWorldTopic12", "HelloWorld"))
        {
            mysub12->run();
        }

        delete mysub12;
    });   




    auto pub_thread13 = std::thread([&]() {
        HelloWorldPublisher* mypub13 = new HelloWorldPublisher();
        if(mypub13->init("HelloWorldTopic13", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub13->run(static_cast<uint32_t>(samples));
        }
        delete mypub13;
    });

    auto sub_thread13 = std::thread([&]() {
        HelloWorldSubscriber* mysub13 = new HelloWorldSubscriber();
        if(mysub13->init("HelloWorldTopic13", "HelloWorld"))
        {
            mysub13->run();
        }

        delete mysub13;
    });   





    auto pub_thread14 = std::thread([&]() {
        HelloWorldPublisher* mypub14 = new HelloWorldPublisher();
        if(mypub14->init("HelloWorldTopic14", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub14->run(static_cast<uint32_t>(samples));
        }
        delete mypub14;
    });

    auto sub_thread14 = std::thread([&]() {
        HelloWorldSubscriber* mysub14 = new HelloWorldSubscriber();
        if(mysub14->init("HelloWorldTopic14", "HelloWorld"))
        {
            mysub14->run();
        }

        delete mysub14;
    });   





    auto pub_thread15 = std::thread([&]() {
        HelloWorldPublisher* mypub15 = new HelloWorldPublisher();
        if(mypub15->init("HelloWorldTopic15", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub15->run(static_cast<uint32_t>(samples));
        }
        delete mypub15;
    });

    auto sub_thread15 = std::thread([&]() {
        HelloWorldSubscriber* mysub15 = new HelloWorldSubscriber();
        if(mysub15->init("HelloWorldTopic15", "HelloWorld"))
        {
            mysub15->run();
        }

        delete mysub15;
    });   






    auto pub_thread16 = std::thread([&]() {
        HelloWorldPublisher* mypub16 = new HelloWorldPublisher();
        if(mypub16->init("HelloWorldTopic16", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub16->run(static_cast<uint32_t>(samples));
        }
        delete mypub16;
    });

    auto sub_thread16 = std::thread([&]() {
        HelloWorldSubscriber* mysub16 = new HelloWorldSubscriber();
        if(mysub16->init("HelloWorldTopic16", "HelloWorld"))
        {
            mysub16->run();
        }

        delete mysub16;
    });   






    auto pub_thread17 = std::thread([&]() {
        HelloWorldPublisher* mypub17 = new HelloWorldPublisher();
        if(mypub17->init("HelloWorldTopic17", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub17->run(static_cast<uint32_t>(samples));
        }
        delete mypub17;
    });

    auto sub_thread17 = std::thread([&]() {
        HelloWorldSubscriber* mysub17 = new HelloWorldSubscriber();
        if(mysub17->init("HelloWorldTopic17", "HelloWorld"))
        {
            mysub17->run();
        }

        delete mysub17;
    });   



    auto pub_thread18 = std::thread([&]() {
        HelloWorldPublisher* mypub18 = new HelloWorldPublisher();
        if(mypub18->init("HelloWorldTopic18", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub18->run(static_cast<uint32_t>(samples));
        }
        delete mypub18;
    });

    auto sub_thread18 = std::thread([&]() {
        HelloWorldSubscriber* mysub18 = new HelloWorldSubscriber();
        if(mysub18->init("HelloWorldTopic18", "HelloWorld"))
        {
            mysub18->run();
        }

        delete mysub18;
    });   




    auto pub_thread19 = std::thread([&]() {
        HelloWorldPublisher* mypub19 = new HelloWorldPublisher();
        if(mypub19->init("HelloWorldTopic19", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub19->run(static_cast<uint32_t>(samples));
        }
        delete mypub19;
    });

    auto sub_thread19 = std::thread([&]() {
        HelloWorldSubscriber* mysub19 = new HelloWorldSubscriber();
        if(mysub19->init("HelloWorldTopic19", "HelloWorld"))
        {
            mysub19->run();
        }

        delete mysub19;
    });   




    auto pub_thread20 = std::thread([&]() {
        HelloWorldPublisher* mypub20 = new HelloWorldPublisher();
        if(mypub20->init("HelloWorldTopic20", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub20->run(static_cast<uint32_t>(samples));
        }
        delete mypub20;
    });

    auto sub_thread20 = std::thread([&]() {
        HelloWorldSubscriber* mysub20 = new HelloWorldSubscriber();
        if(mysub20->init("HelloWorldTopic20", "HelloWorld"))
        {
            mysub20->run();
        }

        delete mysub20;
    });   




    auto pub_thread21 = std::thread([&]() {
        HelloWorldPublisher* mypub21 = new HelloWorldPublisher();
        if(mypub21->init("HelloWorldTopic21", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub21->run(static_cast<uint32_t>(samples));
        }
        delete mypub21;
    });

    auto sub_thread21 = std::thread([&]() {
        HelloWorldSubscriber* mysub21 = new HelloWorldSubscriber();
        if(mysub21->init("HelloWorldTopic21", "HelloWorld"))
        {
            mysub21->run();
        }

        delete mysub21;
    });   



    auto pub_thread22 = std::thread([&]() {
        HelloWorldPublisher* mypub22 = new HelloWorldPublisher();
        if(mypub22->init("HelloWorldTopic22", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub22->run(static_cast<uint32_t>(samples));
        }
        delete mypub22;
    });

    auto sub_thread22 = std::thread([&]() {
        HelloWorldSubscriber* mysub22 = new HelloWorldSubscriber();
        if(mysub22->init("HelloWorldTopic22", "HelloWorld"))
        {
            mysub22->run();
        }

        delete mysub22;
    });   



auto pub_thread23 = std::thread([&]() {
        HelloWorldPublisher* mypub23 = new HelloWorldPublisher();
        if(mypub23->init("HelloWorldTopic23", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub23->run(static_cast<uint32_t>(samples));
        }
        delete mypub23;
    });

    auto sub_thread23 = std::thread([&]() {
        HelloWorldSubscriber* mysub23 = new HelloWorldSubscriber();
        if(mysub23->init("HelloWorldTopic23", "HelloWorld"))
        {
            mysub23->run();
        }

        delete mysub23;
    });   



auto pub_thread24 = std::thread([&]() {
        HelloWorldPublisher* mypub24 = new HelloWorldPublisher();
        if(mypub24->init("HelloWorldTopic24", "HelloWorld"))
        {
            std::cout << "main 39"<< std::endl;
            mypub24->run(static_cast<uint32_t>(samples));
        }
        delete mypub24;
    });

    auto sub_thread24 = std::thread([&]() {
        HelloWorldSubscriber* mysub24 = new HelloWorldSubscriber();
        if(mysub24->init("HelloWorldTopic24", "HelloWorld"))
        {
            mysub24->run();
        }

        delete mysub24;
    });   




    pub_thread.join();
    sub_thread.join();

    pub_thread1.join();
    sub_thread1.join();

    pub_thread2.join();
    sub_thread2.join();

    pub_thread3.join();
    sub_thread3.join();

    pub_thread4.join();
    sub_thread4.join();


    pub_thread5.join();
    sub_thread5.join();

    pub_thread6.join();
    sub_thread6.join();


    pub_thread7.join();
    sub_thread7.join();


    pub_thread8.join();
    sub_thread8.join();


    pub_thread9.join();
    sub_thread9.join();


    pub_thread10.join();
    sub_thread10.join();



    pub_thread11.join();
    sub_thread11.join();


    pub_thread12.join();
    sub_thread12.join();




    pub_thread13.join();
    sub_thread13.join();



    pub_thread14.join();
    sub_thread14.join();



    pub_thread15.join();
    sub_thread15.join();




    pub_thread16.join();
    sub_thread16.join();



    pub_thread17.join();
    sub_thread17.join();



    pub_thread18.join();
    sub_thread18.join();




    pub_thread19.join();
    sub_thread19.join();



    pub_thread20.join();
    sub_thread20.join();



    pub_thread21.join();
    sub_thread21.join();


    pub_thread22.join();
    sub_thread22.join();



    pub_thread23.join();
    sub_thread23.join();



    pub_thread24.join();
    sub_thread24.join();





    return 0;
}
