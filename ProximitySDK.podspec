Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  s.name         = "ProximitySDK"
  s.version      = "0.0.1"
  s.summary      = "Mobile SDK for Proximity Platform of encircle.io"
  s.description  = "Proximity SDK is Library to deliver Proximity experience on iOS devices via encircle.io's platform. It leverages beacon or wifi to detect precise context of mobile user."

  s.homepage     = "http://www.encircle.io"
  s.screenshots  = "http://encircle.io/img/presskit-brandassets/01-encircleio-platform.jpg"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.license      = "MIT"
  s.license      = { :type => "MIT", :file => "LICENSE.txt" }


  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.author             = { "Akash Kotadia" => "akash@encircle.io" }
  # s.authors            = { "Akash Kotadia" => "akash@encircle.io" }
  # s.social_media_url   = "http://twitter.com/Akash Kotadia"

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #  
  s.platform     = :ios, "7.0"

  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.source       = { :git => "https://akash_kotadia@bitbucket.org/akash_kotadia/ios_sdk_public.git", :tag => "0.0.1" }

  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.source_files  = "ProximitySDK", "ProximitySDK/**/*.{h}"
  s.public_header_files = "ProximitySDK/**/*.h"
  s.ios.vendored_library = "ProximitySDK/libProximitySDK.a"

  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.resource = "ProximitySDK/ProximitySDKResource.bundle"

  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  s.framework  = "CoreLocation"

  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
 
  s.requires_arc = true

  s.dependency 'AFNetworking', '2.6.0'
  s.dependency 'SDWebImage', '3.7.3'
  s.dependency 'PubNub', '= 3.7.1'
  s.dependency 'CocoaLumberjack', '2.0.3'

end
