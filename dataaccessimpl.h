#ifndef __DATAACCESSIMPL_H
#define __DATAACCESSIMPL_H

#include "ch/connectionstatusds.h"

#include <bts/application.hpp>

class TConnectionStatusDS : public IConnectionStatusDataSource
  {
  public:
    TConnectionStatusDS();
    virtual ~TConnectionStatusDS();

  /// IConnectionStatusDataSource interface implementation:
    /// \see IConnectionStatusDataSource interface description.
    virtual unsigned int GetConnectionCount() const;

  private:
    std::shared_ptr<bts::application> App;
  };

#endif ///__DATAACCESSIMPL_H


