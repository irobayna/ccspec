#ifndef CCSPEC_UNEXPECTED_THROW_H_
#define CCSPEC_UNEXPECTED_THROW_H_

#include <exception>
#include <string>
#include "exception.h"

namespace ccspec {
namespace expectation {

class UnexpectedThrow : public Exception {
  public:
    explicit UnexpectedThrow(const std::exception& cause);

    virtual std::string toString() const;

  private:
    const std::exception& cause_;
};

} // namespace expectation
} // namespace ccspec

#endif // CCSPEC_UNEXPECTED_THROW_H_