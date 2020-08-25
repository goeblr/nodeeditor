#pragma once

#ifndef Q_MOC_RUN
#include <QtGlobal>
#if QT_VERSION < QT_VERSION_CHECK(5, 14, 1)
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
#endif