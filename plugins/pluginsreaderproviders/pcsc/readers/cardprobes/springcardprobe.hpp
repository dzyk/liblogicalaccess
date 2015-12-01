#pragma once

#include "pcsccardprobe.hpp"

namespace logicalaccess
{
class SpringCardProbe : public PCSCCardProbe
{
  public:
    SpringCardProbe(ReaderUnit *ru);


  public:
    virtual bool maybe_mifare_classic() override;
};
}