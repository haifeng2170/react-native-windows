// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <Views/FrameworkElementViewManager.h>

namespace react {
namespace uwp {

class RefreshControlViewManager : public FrameworkElementViewManager {
  using Super = FrameworkElementViewManager;

 public:
  RefreshControlViewManager(const std::shared_ptr<IReactInstance> &reactInstance);

  facebook::react::ShadowNode *createShadow() const override;

  const char *GetName() const override;
  folly::dynamic GetNativeProps() const override;
  folly::dynamic GetExportedCustomDirectEventTypeConstants() const override;

 protected:
  XamlView CreateViewCore(int64_t tag) override;
  void AddView(XamlView parent, XamlView child, int64_t index) override;
};

} // namespace uwp
} // namespace react
