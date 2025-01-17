#pragma once

#include <morphio/properties.h>
#include <morphio/types.h>

namespace morphio {
namespace readers {
namespace swc {
Property::Properties load(const std::string& path,
                          const std::string& contents,
                          unsigned int options);
}  // namespace swc
}  // namespace readers
}  // namespace morphio
