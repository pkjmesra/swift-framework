#import <FritzCore/FritzCore.h>



#if !defined(__has_include)
  #error "Fritz.h won't import anything if your compiler doesn't support __has_include. Please \
          import the headers individually."
#else
  #if __has_include(<FritzVision/FritzVision.h>)
    #import <FritzVision/FritzVision.h>
  #endif

  #if __has_include(<FritzVisionLabelModel/FritzVisionLabelModel.h>)
    #import <FritzVisionLabelModel/FritzVisionLabelModel.h>
  #endif

  #if __has_include(<FritzManagedModel/FritzManagedModel.h>)
    #import <FritzManagedModel/FritzManagedModel.h>
  #endif

  #if __has_include(<FritzVisionObjectModel/FritzVisionObjectModel.h>)
    #import <FritzVisionObjectModel/FritzVisionObjectModel.h>
  #endif

#endif  // defined(__has_include)