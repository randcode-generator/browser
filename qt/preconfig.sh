./configure -prefix $PWD -opensource -confirm-license -v -system-freetype -fontconfig -qpa -release -fast -nomake demos -nomake docs -nomake examples -nomake translations -nomake tools -no-exceptions -no-stl -no-libmng -no-libtiff -no-icu -no-declarative -no-multimedia -no-opengl -no-openvg -no-phonon -no-qt3support -no-script -no-scripttools -no-svg -no-xmlpatterns -D QT_NO_GRAPHICSVIEW -D QT_NO_GRAPHICSEFFECT -graphicssystem raster -no-dbus -no-glib -no-gstreamer -no-gtkstyle -no-cups -no-sm -no-xinerama -no-xkb -qt-libjpeg -qt-libpng -qt-zlib -openssl -D QT_NO_STYLESHEET -D QT_NO_STYLE_CDE -D QT_NO_STYLE_CLEANLOOKS -D QT_NO_STYLE_MOTIF -D QT_NO_STYLE_PLASTIQUE
make -j 8
make install
