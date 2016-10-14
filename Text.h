#ifndef TEXT_HPP
#define TEXT_HPP

namespace t2d {

	class Text
	{
	public:
		
		// Different text styles.
		enum  Style {
			Regular = 0,
			Bold = 1 << 0,
			Italic = 1 << 1,
			Underlined = 1 << 2
		};

	private:
		Text() { }
	};
}
#endif
