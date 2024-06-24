virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) = 0; // Example of STDMETHOD in interface definition
HRESULT STDMETHODCALLTYPE Remove(_In_ IWSDiscoveredService* service); // Example of STDMETHODIMP in method implementation
