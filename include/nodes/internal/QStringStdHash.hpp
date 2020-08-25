#pragma once

#include <QtGlobal>
#if QT_VERSION < 0x051400

#include <functional>

#include <QtCore/QString>
#include <QtCore/QVariant>

namespace std
{
template<>
struct hash<QString>
{
  inline std::size_t
  operator()(QString const &s) const
  {
    return qHash(s);
  }
};
}

#endif
