class writer {
    public:
        writer() {}
        virtual ~writer() {}

        virtual void write(const string& s) = 0;
        virtual void writeline(const string& s) { write(s + "\n"); }
};

class reader {
    public:
        reader() {}
        virtual ~reader() {}

        // TODO ...
};

class file : public writer, public reader {
    public:
        file();
        virtual ~file();

        bool open(const string& s, const string& mode);
        void close();

        void write(const string& s);

    private:
        FILE *_stream;
};

file::file()
    : _stream(NULL)
{
}

file::~file()
{
    close();
}

bool
file::open(const string& s, const string& mode)
{
    close();

    _stream = fopen(s.data(), mode.data());

    return _stream != NULL;
}

void
file::close()
{
    if (_stream != NULL) {
        fclose(_stream);
        _stream = NULL;
    }
}

void
file::write(const string& s)
{
    std::fprintf(_stream, "%s", s.data());
}

