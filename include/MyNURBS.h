#ifndef MYNURBS_H
#define MYNURBS_H

#include "tinynurbs/tinynurbs.h"
#include <vector>
#include <glm/glm.hpp>

namespace mynurbs {

// Replacement for tinynurbs::curvePoint
template <typename T>
glm::vec<3, T> curvePoint(const tinynurbs::RationalCurve<T>& curve, T u) {
    return tinynurbs::curvePoint(curve, u);
}

// Replacement for tinynurbs::surfacePoint
template <typename T>
glm::vec<3, T> surfacePoint(const tinynurbs::RationalSurface<T>& surface, T u, T v) {
    return tinynurbs::surfacePoint(surface, u, v);
}

// Replacement for tinynurbs::curveDerivatives
template <typename T>
std::vector<glm::vec<3, T>> curveDerivatives(const tinynurbs::RationalCurve<T>& curve, int n, T u) {
    return tinynurbs::curveDerivatives(curve, n, u);
}

// Replacement for tinynurbs::surfaceDerivatives
template <typename T>
tinynurbs::array2<glm::vec<3, T>> surfaceDerivatives(const tinynurbs::RationalSurface<T>& surface, int n, T u, T v) {
    return tinynurbs::surfaceDerivatives(surface, n, u, v);
}

// Replacement for tinynurbs::surfaceNormal
template <typename T>
glm::vec<3, T> surfaceNormal(const tinynurbs::RationalSurface<T>& surface, T u, T v) {
    return tinynurbs::surfaceNormal(surface, u, v);
}

} // namespace mynurbs

#endif // MYNURBS_H