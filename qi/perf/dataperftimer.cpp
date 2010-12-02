#pragma once
/*
*  Author(s):
*  - Chris  Kilner <ckilner@aldebaran-robotics.com>
*  - Cedric Gestes <gestes@aldebaran-robotics.com>
*
*  Copyright (C) 2010 Aldebaran Robotics
*/

#include <iomanip>
#include "dataperftimer.hpp"
#include <iostream>
//#include <rttools/rttime.h>

namespace qi {
  namespace perf {

    DataPerfTimer::DataPerfTimer(const std::string& testDescription, bool showHeader)
      : fLoopCount(1),
        fMsgSize(2),
        fElapsed(0.0),
        fMsgPs(0.0),
        fMgbPs(0.0)
    {
      if (showHeader) {
        printHeader(testDescription);
      }
    }

    void DataPerfTimer::printHeader(const std::string& testDescription) {
      if (! testDescription.empty()) {
        std::cout << testDescription << std::endl;
      }
      std::cout << "bytes, msg/s, Mb/s" << std::endl;
    }

    void DataPerfTimer::start(
      const unsigned long loopCount,
      const unsigned long msgSize) {
      fLoopCount = loopCount;
      fMsgSize = msgSize;
      rt.restart();
    }

    void DataPerfTimer::stop(bool shouldPrint) {
      //rt.stop();
      //fElapsed = rt.diffUs() / 1000.0 / 1000.0;
      boost::timer t;
      fElapsed = rt.elapsed();
      fMsgPs = 1.0 / (fElapsed / (1.0 * fLoopCount) );
      if (fMsgSize > 0) {
        fMgbPs = (fMsgPs * fMsgSize) / (1024.0 * 1024.0);
      }
      if (shouldPrint)
        print();
    }

    void DataPerfTimer::print()
    {
      if (fMsgSize > 0) {
        std::cout << std::setprecision(12) << fMsgSize << ", " << fMsgPs << ", " << fMgbPs << std::endl;
      } else {
        std::cout << std::setprecision(12) << fMsgPs  << " msg/s" << std::endl;
      }
    }
  }
}

